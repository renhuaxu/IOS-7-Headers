/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CALayer.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _SLSheetMaskLayer : CALayer
{
    float _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

@property(retain, nonatomic) UIColor *clipBackgroundColor; // @synthesize clipBackgroundColor=_clipBackgroundColor;
@property(nonatomic) float clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;

@end

