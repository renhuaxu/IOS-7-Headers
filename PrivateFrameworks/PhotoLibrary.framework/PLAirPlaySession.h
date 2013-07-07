/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AirPlayRemoteSlideshow, MediaControlClient, NSDictionary, NSMutableArray, NSString;

@interface PLAirPlaySession : NSObject
{
    id <PLAirPlaySessionDataSource> _dataSource;
    NSMutableArray *_streamedPhotoUuids;
    NSDictionary *_pickedRoute;
    MediaControlClient *_mediaControlClient;
    BOOL _streamingPhotos;
    BOOL _streamingRemoteSlideshow;
    BOOL _streamingLocalSlideShow;
    AirPlayRemoteSlideshow *_remoteSlideshow;
    NSDictionary *_remoteSlideshowAvailableFeatures;
    NSString *_password;
    BOOL _routeRequiresPassword;
    BOOL _passwordIsAPin;
    BOOL _showingPasswordAlert;
    BOOL _validPassword;
    BOOL _validated;
    BOOL _sentPhoto;
    unsigned int _features;
}

+ (void)endNetworkAssertion;
+ (void)beginNetworkAssertion;
+ (BOOL)canDisplayMedia:(id)arg1;
@property(nonatomic) unsigned int features; // @synthesize features=_features;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) BOOL validPassword; // @synthesize validPassword=_validPassword;
@property(readonly, nonatomic) BOOL routeRequiresPassword; // @synthesize routeRequiresPassword=_routeRequiresPassword;
@property(retain, nonatomic) NSDictionary *remoteSlideshowAvailableFeatures; // @synthesize remoteSlideshowAvailableFeatures=_remoteSlideshowAvailableFeatures;
@property(retain, nonatomic) AirPlayRemoteSlideshow *remoteSlideshow; // @synthesize remoteSlideshow=_remoteSlideshow;
@property(nonatomic) id <PLAirPlaySessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL streamingLocalSlideShow; // @synthesize streamingLocalSlideShow=_streamingLocalSlideShow;
- (void)validate;
- (void)_validateForBadPassword:(BOOL)arg1 completionBlock:(id)arg2;
- (void *)_keychainAccessibility;
- (void)getRemoteFeaturesWithCompletionHandler:(id)arg1;
- (void)stopRemoteSlideshow;
- (void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2;
- (id)remoteLocalizationForSlideshowThemeKey:(id)arg1;
- (id)supportedRemoteSlideshowThemes;
- (BOOL)supportsRemoteSlideshow;
- (id)_fixLegacyEvent:(id)arg1;
- (BOOL)_streaming;
- (void)streamPhoto:(id)arg1 withTransition:(id)arg2;
- (void)invalidatePhotoCache;
- (void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3;
- (void)stopStreaming;
- (void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4;
- (BOOL)_shouldCachePhotos;
- (BOOL)_supportsPhotoCaching;
- (id)pickedRouteName;
- (id)pickedRouteID;
- (void)dealloc;
- (id)initWithPickedRoute:(id)arg1;

@end
