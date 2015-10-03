//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"

@class NSString, SBOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView <SBMainAppSwitcherPageContentView>
{
    long long _orientation;
    long long _desiredWallpaperOrientation;
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    SBWallpaperEffectView *_wallpaperEffectView;
    long long _wallpaperStyle;
    double _cornerRadius;
}

@property(readonly, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(nonatomic) long long wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;
@property(nonatomic) long long desiredWallpaperOrientation; // @synthesize desiredWallpaperOrientation=_desiredWallpaperOrientation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)_updateWallpaperOrientation;
- (void)_updateCornerRadius;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)layoutSubviews;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
