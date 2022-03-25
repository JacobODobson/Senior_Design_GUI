/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x54, 0x6f, 0x20, 0x65, 0x78, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x64, 0x61, 0x74, 0x61, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x61, 0x20, 0x63, 0x6f, 0x6d, 0x70, 0x75, 0x74, 0x65, 0x72, 0xa, 0x61, 0x6e, 0x64, 0x20, 0x75, 0x73, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x63, 0x6f, 0x6d, 0x70, 0x75, 0x74, 0x65, 0x72, 0x27, 0x73, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x65, 0x78, 0x70, 0x6c, 0x6f, 0x72, 0x65, 0x72, 0x20, 0x74, 0x6f, 0x20, 0x6e, 0x61, 0x76, 0x69, 0x67, 0x61, 0x74, 0x65, 0xa, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x27, 0x73, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6e, 0x61, 0x6c, 0x20, 0x73, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x0, // @0 "To export data, connect this device to a computer?and use the computer's file explorer to navigate?to this device's internal storage"
    0x45, 0x6e, 0x74, 0x65, 0x72, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x27, 0x73, 0x20, 0x70, 0x61, 0x69, 0x72, 0x20, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x3a, 0xa, 0x41, 0x42, 0x43, 0x31, 0x32, 0x33, 0xa, 0xa, 0x4f, 0x72, 0xa, 0x45, 0x6e, 0x74, 0x65, 0x72, 0x20, 0x74, 0x68, 0x65, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x65, 0x64, 0x20, 0x6f, 0x6e, 0xa, 0x74, 0x68, 0x65, 0x20, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x27, 0x73, 0x20, 0x70, 0x61, 0x69, 0x72, 0x20, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x0, // @133 "Enter this code on the other device's pair screen:?ABC123??Or?Enter the code displayed on?the other device's pair screen"
    0x42, 0x61, 0x73, 0x65, 0x20, 0x53, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x3a, 0x0, // @254 "Base Stations:"
    0x2, 0x0, // @269 "<>"
    0x53, 0x61, 0x76, 0x65, 0x64, 0x20, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x73, 0x3a, 0x0, // @271 "Saved Points:"
    0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x0, // @285 "Quick Status"
    0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x4e, 0x61, 0x6d, 0x65, 0x0, // @298 "Device Name"
    0x50, 0x6f, 0x69, 0x6e, 0x74, 0x20, 0x31, 0x3a, 0x20, 0x0, // @310 "Point 1: "
    0x50, 0x6f, 0x69, 0x6e, 0x74, 0x20, 0x32, 0x3a, 0x20, 0x0, // @320 "Point 2: "
    0x50, 0x6f, 0x69, 0x6e, 0x74, 0x20, 0x33, 0x3a, 0x20, 0x0, // @330 "Point 3: "
    0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0, // @340 "Settings"
    0x43, 0x6f, 0x6e, 0x66, 0x69, 0x72, 0x6d, 0x0, // @349 "Confirm"
    0x52, 0x6f, 0x76, 0x65, 0x72, 0x20, 0x31, 0x0, // @357 "Rover 1"
    0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x0, // @365 "Cancel"
    0x45, 0x78, 0x70, 0x6f, 0x72, 0x74, 0x0, // @372 "Export"
    0x53, 0x74, 0x6f, 0x72, 0x65, 0x0, // @379 "Store"
    0x42, 0x61, 0x63, 0x6b, 0x0, // @385 "Back"
    0x48, 0x6f, 0x6d, 0x65, 0x0, // @390 "Home"
    0x4c, 0x69, 0x73, 0x74, 0x0, // @395 "List"
    0x4d, 0x6f, 0x64, 0x65, 0x0, // @400 "Mode"
    0x50, 0x61, 0x69, 0x72, 0x0, // @405 "Pair"
    0x31, 0x32, 0x33, 0x0, // @410 "123"
    0x36, 0x30, 0x25, 0x0, // @414 "60%"
    0x41, 0x42, 0x43, 0x0, // @418 "ABC"
    0x4d, 0x61, 0x70, 0x0 // @422 "Map"
};
TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}