/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UIImageView, UINavigationBar, UIView;

@interface UINavigationItem : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    NSString *_prompt;
    int _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    BOOL _hidesBackButton;
    BOOL _leftItemsSupplementBackButton;
    UIImageView *_frozenTitleView;
    BOOL _barStyleIndependent;
    int _independentBarStyle;
    NSArray *_leftItemSpaceList;
    NSArray *_rightItemSpaceList;
    unsigned int _leftFlexibleSpaceCount;
    unsigned int _rightFlexibleSpaceCount;
    NSMutableDictionary *_backgroundImages;
    float __titleViewWidthForAnimations;
}

+ (id)defaultFont;
@property(nonatomic) float _titleViewWidthForAnimations; // @synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations;
@property(nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned int _rightFlexibleSpaceCount; // @synthesize _rightFlexibleSpaceCount;
@property(nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned int _leftFlexibleSpaceCount; // @synthesize _leftFlexibleSpaceCount;
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList; // @synthesize _rightItemSpaceList;
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList; // @synthesize _leftItemSpaceList;
@property(nonatomic, setter=_setIndependentBarStyle:) int _independentBarStyle; // @synthesize _independentBarStyle;
@property(nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent; // @synthesize _barStyleIndependent;
- (id)_independentShadowImage;
- (id)_independentBackgroundImageForBarMetrics:(int)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(int)arg3;
@property(readonly, nonatomic) NSMutableDictionary *_backgroundImages; // @synthesize _backgroundImages;
@property(nonatomic) BOOL leftItemsSupplementBackButton;
- (id)_automationID;
- (id)_firstNonSpaceRightItem;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceItemInList:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (id)customRightItem;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (id)customLeftItem;
- (void)setCustomLeftItem:(id)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)_titleView;
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1;
- (BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (id)_leftBarButtonItems;
- (void)_setLeftBarButtonItems:(id)arg1;
- (id)_rightBarButtonItems;
- (void)_setRightBarButtonItems:(id)arg1;
@property(copy, nonatomic) NSArray *rightBarButtonItems;
@property(copy, nonatomic) NSArray *leftBarButtonItems;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1;
- (id)customRightView;
- (void)_setCustomRightView:(id)arg1;
- (id)_customRightView;
- (id)_customRightViewCreating:(BOOL)arg1;
- (id)_customRightViews;
- (id)_customRightViewsCreating:(BOOL)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftView:(id)arg1;
- (id)customLeftView;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2;
- (id)_customLeftView;
- (id)_customLeftViewCreating:(BOOL)arg1;
- (id)_customLeftViews;
- (id)_customLeftViewsCreating:(BOOL)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
- (void)_setRightBarButtonItem:(id)arg1;
- (id)_rightBarButtonItem;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
- (void)_setLeftBarButtonItem:(id)arg1;
- (id)_leftBarButtonItem;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)set_customRightViews:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)set_customLeftView:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL hidesBackButton;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;
@property(copy, nonatomic) NSString *prompt;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (id)backButtonView;
- (id)existingBackButtonView;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned int)arg1 withView:(id)arg2 left:(BOOL)arg3;
- (void)_removeBackButtonView;
- (void)_removeTitleAndButtonViews;
- (id)context;
- (void)setContext:(id)arg1;
- (int)tag;
- (void)setTag:(int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;
- (id)currentBackButtonTitle;
- (id)backButtonTitle;
@property(copy, nonatomic) NSString *title;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(int)arg2;
- (void)setBackButtonTitle:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_cleanupFrozenTitleView;
- (void)_freezeCurrentTitleView;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)_setBackButtonPressed:(BOOL)arg1;

@end

