/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SATransportationResponse.h>

@class NSArray, NSURL, SACalendar;

@interface SATransportationRoutedResponse : SATransportationResponse
{
}

+ (id)routedResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)routedResponse;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSArray *wayPointItems;
@property(copy, nonatomic) NSURL *mapIdentifier;
@property(retain, nonatomic) SACalendar *estimatedTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

