#include "tgbot/tgbot.h"
#include "Parser.h"

#include "ApiKey.h"

int main()
{
	TgBot::Bot bot(API_KEY);

	bool bot_enabled = true;

    bot.getEvents().onCommand("start_cpp_bot", [&](TgBot::Message::Ptr message)
	{
        bot.getApi().sendMessage(message->chat->id, "C++ bot enabled!");
		bot_enabled = true;
    });

	bot.getEvents().onCommand("stop_cpp_bot", [&](TgBot::Message::Ptr message)
	{
		bot.getApi().sendMessage(message->chat->id, "C++ bot disabled");
		bot_enabled = false;
	});

	if (bot_enabled)
	{
		// On any message
		bot.getEvents().onAnyMessage([&bot](TgBot::Message::Ptr message)
		{
			printf("User wrote %s\n", message->text.c_str());
			Parser parser(message->text);

			const std::string str = parser.getFinalString();

			if (!str.empty())
			{
				bot.getApi().sendMessage(message->chat->id, str, false, message->messageId, TgBot::GenericReply::Ptr(), "Markdown", false);
			}
		});
	}

    try {
        printf("Bot username: %s\n", bot.getApi().getMe()->username.c_str());
        TgBot::TgLongPoll longPoll(bot);
        while (true) {
            printf("Long poll started\n");
            longPoll.start();
        }
    } catch (TgBot::TgException& e) {
        printf("error: %s\n", e.what());
    }

    return 0;
}
