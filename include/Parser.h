#ifndef PARSER_H
#define PARSER_H

#include "tgbot/tgbot.h"

#include <array>

const std::array<std::pair<std::string, std::string>, 20> KEYWORD_LIST = { {
		{"ayy", "lmao"},
		{"awoo", "don't awoo"},
		{"keksimus", "maximus"},
		{"tbh fam", "\U0001F602\U0001F44C"},
		{"rip", ":c"},
		{"morto", "rip"}
	}
};

class Parser
{
public:
	Parser(const std::string& message);
	~Parser();

	std::string getFinalString();
	
private:
	void parse();

	std::string m_message;

};

#endif /* PARSER_H */


/*

            if "awoo" in text.replace(" ", "").replace("\n", "") and not "don'tawoo" in text.replace(" ", "").replace("\n", ""):
                reply(img=urllib2.urlopen('http://s3.amazonaws.com/cdn.roosterteeth.com/uploads/images/5ee99c55-7448-46ec-b93b-b413265f5c28/md/1537338-1453704069550-image.jpg').read())
            if "xd" in text:
                reply(img=urllib2.urlopen('https://pbs.twimg.com/media/ClE02SzVYAIq4gN.jpg').read())
            if "uwu" in text.replace(" ", "").replace("\n", ""):
                reply(img=urllib2.urlopen('https://furnation.com/public/album_photo/0b/73/06/6669e_ac4e.jpg').read())
            if "tbh fam" in text:
                reply(u'\U0001F602\U0001F44C')
            if "bad automod" in text or "fuck you automod" in text or "fuck u automod" in text:
                reply("u fukin wot m8, i'll rek you on wii party")
            if "morto" in text:
                reply("rip")
            if text == "rip":
                reply(":c")
            if "nooo" in text:
                reply(img=urllib2.urlopen('http://i.imgur.com/ASiQpMU.jpg').read())
            if "fixed" in text.replace(" ", "").replace("\n", "") or "fixato" in text.replace(" ", "").replace("\n", "") or "fix'd" in text.replace(" ", "").replace("\n", ""):
                reply("https://youtu.be/_1d_yAFLn1c?t=2m40s")
            if "afamok" in text:
                reply("Mammt")
            if text == "succ":
                reply(img=urllib2.urlopen('http://static.deathandtaxesmag.com/uploads/2014/05/pussy.png').read())
            if "NANONANONANO" in text:
                reply('http://ci.memecdn.com/477/6742477.gif')
            if "aya" in text.replace(" ", "").replace("\n", "") or "famale" in text.replace(" ", "").replace("\n", ""):
                reply('http://i3.asn.im/Nichijou-_tcu1.gif')
            if "bestemmio" in text:
                reply('http://i840.photobucket.com/albums/zz324/MikeyzDragon/Hakase/hakasepopcat.gif')
            if "dormo" in text or "nott" in text:
                reply("Nott")
            if text == "il cazzo" or text == "le palle":
                reply("di zia Vittoria")
            if "r/" in text and not " r/" in text and not "/r/" in text:
                reply("http://reddit.com/" + text)
            if text == "oh cazzo":
                reply("Un debian")
            if "napol" in text.lower():
                reply("SFACCIMM")
 */
