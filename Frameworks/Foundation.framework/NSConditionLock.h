/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking.h"

@interface NSConditionLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)unlockWithCondition:(int)arg1;
- (void)unlock;
- (BOOL)tryLockWhenCondition:(int)arg1;
- (BOOL)tryLock;
- (BOOL)lockWhenCondition:(int)arg1 beforeDate:(id)arg2;
- (void)lockWhenCondition:(int)arg1;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)lock;
- (int)condition;
- (void)finalize;
- (void)dealloc;
- (id)initWithCondition:(int)arg1;
- (id)init;

@end

