/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol NSDeserializerStream
- (id)initFromMemoryNoCopy:(const void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (void)readData:(void *)arg1 length:(unsigned int)arg2;
- (unsigned int)readAlignedDataSize;
- (int)readInt;
@end
