//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationPhoneToLockScreenBase.h"

@class SBAppStatusBarSettingsAssertion, SBDisableUnlockAssertion;

@interface SBUIAnimationSnapPhoneToLockScreen : SBUIAnimationPhoneToLockScreenBase
{
    SBDisableUnlockAssertion *_disableUnlockAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;

@end

