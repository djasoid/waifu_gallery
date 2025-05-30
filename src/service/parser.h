#include <string>
#include <vector>
#include <cstdint>
#include "model.h"

enum class ParserType {
    None,
    Pixiv,
    Twitter
};

PicInfo parsePicture(const std::string& pictureFilePath, ParserType parser=ParserType::None);
PixivInfo parsePixivMetadata(const std::string& metadataFilePath);
std::vector<PixivInfo> parsePixivCsv(const std::string& pixivCsvFilePath);
PixivInfo parsePixivJson(const std::string& pixivJsonFilePath);
TweetInfo parseTweetJson(const std::string& tweetJsonFilePath);

uint64_t calcFileHash(const std::string& filePath);