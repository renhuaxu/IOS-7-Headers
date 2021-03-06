/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSMutableDictionary.h"

@interface NSRTFD : NSMutableDictionary
{
    NSMutableDictionary *dict;
}

+ (void)initialize;
- (int)validatePath:(id)arg1 ignore:(id)arg2;
- (id)addData:(id)arg1 name:(id)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy:(id)arg1 into:(id)arg2;
- (id)removeFile:(id)arg1;
- (id)dataForFile:(id)arg1;
- (id)addLink:(id)arg1;
- (id)addFile:(id)arg1;
- (id)_getDocInfoForKey:(id)arg1;
- (id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(struct _NSZone *)arg4;
- (id)replaceFile:(id)arg1 path:(id)arg2;
- (id)replaceFile:(id)arg1 data:(id)arg2;
- (id)getDocument:(id)arg1 docInfo:(id)arg2;
- (id)uniqueKey:(id)arg1;
- (id)createUniqueKey:(id)arg1;
- (id)createRandomKey:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)dataRepresentation;
- (unsigned int)saveToDocument:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3;
- (unsigned int)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3;
- (id)tmpNameFromPath:(id)arg1;
- (id)tmpNameFromPath:(id)arg1 extension:(id)arg2;
- (id)nameFromPath:(id)arg1 extra:(id)arg2;
- (unsigned int)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5;
- (unsigned int)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;
- (unsigned int)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 markBusy:(BOOL)arg5 hardLinkPath:(id)arg6;
- (unsigned int)initFromDocument:(id)arg1;
- (unsigned int)initUnixFile:(id)arg1;
- (id)setPackage:(BOOL)arg1;
- (BOOL)isPackage;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
- (id)init;
- (id)initFromElement:(id)arg1 ofDocument:(id)arg2;
- (unsigned int)addDirNamed:(id)arg1 lazy:(BOOL)arg2;
- (unsigned int)realAddDirNamed:(id)arg1;
- (unsigned int)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(struct _NSZone *)arg4 plist:(id)arg5;
- (unsigned int)addFileNamed:(id)arg1 fileAttributes:(id)arg2;
- (id)getDirInfo:(BOOL)arg1;
- (id)initWithPasteboardDataRepresentation:(id)arg1;
- (id)pasteboardDataRepresentation;
- (id)initFromSerialized:(id)arg1;
- (id)freeSerialized:(void *)arg1 length:(unsigned int)arg2;
- (id)serialize:(void **)arg1 length:(unsigned int *)arg2;
- (BOOL)_isLink:(id)arg1;

@end

