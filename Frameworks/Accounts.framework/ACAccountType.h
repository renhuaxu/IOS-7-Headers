/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ACAccountStore, NSSet, NSString, NSURL;

@interface ACAccountType : NSObject <NSSecureCoding>
{
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    BOOL _supportsMultipleAccounts;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsMultipleAccounts; // @synthesize supportsMultipleAccounts=_supportsMultipleAccounts;
@property(nonatomic) __weak ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *accessKeys; // @synthesize accessKeys=_accessKeys;
@property(nonatomic) int supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(readonly, nonatomic) BOOL accessGranted;
@property(copy, nonatomic) id credentialProtectionPolicy;
@property(nonatomic) int visibility;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
- (void)setAccountTypeDescription:(id)arg1;
@property(readonly, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
- (void)setIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSSet *syncableDataclasses; // @synthesize syncableDataclasses=_syncableDataclasses;
@property(readonly, nonatomic) NSSet *supportedDataclasses; // @synthesize supportedDataclasses=_supportedDataclasses;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;

@end

