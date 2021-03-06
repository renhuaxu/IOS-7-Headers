/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADPattern.h>

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADCustomPattern : OADPattern
{
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

