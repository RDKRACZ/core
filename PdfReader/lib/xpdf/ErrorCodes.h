//========================================================================
//
// ErrorCodes.h
//
// Copyright 2002-2003 Glyph & Cog, LLC
//
//========================================================================

#ifndef ERRORCODES_H
#define ERRORCODES_H

namespace PdfReader
{
    typedef enum
    {
        errNone          =  0, // Нет ошибок
        errOpenFile      =  1, // Ошибка при открытии PDF файла
        errBadCatalog    =  2, // couldn't read the page catalog
        errDamaged       =  3, // PDF файл был поврежден и его невозможно восстановить
        errEncrypted     =  4, // Файл зашифрован, авторизация не пройдена
        errHighlightFile =  5, // nonexistent or invalid highlight file
        errBadPrinter    =  6, // плохой принтер
        errPrinting      =  7, // ошибка во время печати
        errPermission    =  8, // Ошибка связанная с ограничениями наложенными на файл
        errBadPageNum    =  9, // Неверное количество страниц
        errFileIO        = 10, // Ошибка при чтении/записи
        errMemory        = 11  // Memory exceed
    } EError;
}
#endif
