//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BBObserverDelegate.h"
#import "CMPocketStateDelegate.h"
#import "SBCoordinatedPresenting.h"
#import "SBLockScreenActionHandler.h"
#import "SBLockScreenNotificationBannerItemDelegate.h"
#import "SBLockScreenNotificationModel.h"
#import "SBLockScreenNotificationViewDelegate.h"
#import "SBMotionGestureObserver.h"
#import "SBPresentingDelegate.h"
#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"
#import "SBVolumePressBandit.h"

@class BBObserver, BSSerializedRequestQueue, CMPocketStateManager, NSMutableArray, NSSet, NSString, SBAwayViewPluginController, SBLockScreenActionContext, SBLockScreenBounceAnimator, SBLockScreenNotificationCell, SBLockScreenNotificationListView;

@interface SBLockScreenNotificationListController : UIViewController <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, BBObserverDelegate, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate, SBPresentingDelegate, CMPocketStateDelegate, SBCoordinatedPresenting, SBMotionGestureObserver>
{
    SBLockScreenNotificationListView *_notificationView;
    id <SBLockScreenNotificationListDelegate> _delegate;
    BBObserver *_observer;
    NSMutableArray *_listItems;
    NSMutableArray *_realertTimers;
    BSSerializedRequestQueue *_bulletinRequestQueue;
    _Bool _quietModeEnabled;
    _Bool _turnOnScreenForOutOfPocketEvent;
    CDUnknownBlockType _deferredModelUpdateBlock;
    _Bool _hasDeferredUpdateToClearListItems;
    SBLockScreenActionContext *_actionContext;
    id <SBUIBannerTarget> _bannerTarget;
    NSMutableArray *_listItemsBannerQueue;
    SBAwayViewPluginController *_activePlugin;
    _Bool _isOnscreen;
    _Bool _hasMissedUnreadNotifications;
    long long _messagePrivacyRevealState;
    id <SBPresentingDelegate> _presentingDelegate;
    SBLockScreenBounceAnimator *_bounceAnimator;
    SBLockScreenNotificationCell *_hintingCell;
    struct CGPoint _hintingCellOriginalOffset;
    CMPocketStateManager *_pocketStateManager;
    NSString *_powerAssertionName;
    unsigned int _powerAssertionID;
    _Bool _hasAnyContent;
}

+ (id)underlayPropertiesFactory;
@property(nonatomic) _Bool hasAnyContent; // @synthesize hasAnyContent=_hasAnyContent;
@property(retain, nonatomic) SBAwayViewPluginController *activePlugin; // @synthesize activePlugin=_activePlugin;
@property(readonly, nonatomic) _Bool quietModeEnabled; // @synthesize quietModeEnabled=_quietModeEnabled;
@property(nonatomic) id <SBLockScreenNotificationListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_actionContext;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (_Bool)shouldBeginHintForGesture:(id)arg1;
- (id)_firstBulletin;
- (_Bool)_firstBulletinHasRaiseAction;
- (void)_updateMotionGestureObservation;
- (void)didReceiveRaiseGesture;
- (void)presentingControllerDidFinishPresentation:(id)arg1;
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(CDUnknownBlockType)arg2;
- (id)cellAtTouchLocation:(struct CGPoint)arg1;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_reloadVolumePressBanditPreference;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
@property(readonly, nonatomic, getter=isUsingBanners) _Bool usingBanners;
- (_Bool)_shouldAddBannerItem:(id)arg1;
- (void)bannerItemWasTapped:(id)arg1;
- (void)_scheduleRealerts:(id)arg1;
- (void)_killRealerts:(id)arg1;
- (void)_realertTimerFired:(id)arg1;
- (void)_playSoundForBulletinIfPossible:(id)arg1;
- (void)_showTestBulletin;
- (id)listItemAtIndexPath:(id)arg1;
- (unsigned long long)count;
- (void)noteListViewReadyForModelUpdate;
- (void)listView:(id)arg1 cellDidEndScrolling:(id)arg2;
- (void)listView:(id)arg1 cellDidBeginScrolling:(id)arg2;
- (void)listViewDidEndScrolling:(id)arg1;
- (void)listViewDidBeginScrolling:(id)arg1;
- (id)lockScreenScrollView;
- (void)noteUnlockActionChanged:(id)arg1;
- (void)_dismissBulletinsForActionContext:(id)arg1;
- (void)handleLockScreenActionWithContext:(id)arg1;
- (void)lockScreenViewDidEndScrollingOnPage:(long long)arg1;
- (void)concealForChangeInMessagePrivacy;
- (void)revealForChangeInMessagePrivacy;
- (_Bool)removeLockScreenNotificationsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)removeItemsForNotificationCenterPresentation;
- (_Bool)removeItemsForUnlock;
- (void)_sortItemList:(id)arg1;
- (void)_updateModelAndViewForRemovalOfItem:(id)arg1;
- (void)_updateModelForRemovalOfItem:(id)arg1 updateView:(_Bool)arg2;
- (void)_updateModelAndViewForReplacingItem:(id)arg1 withNewItem:(id)arg2;
- (void)_updateModelAndViewForModificationOfItem:(id)arg1;
- (void)_updateModelAndViewForAdditionOfItem:(id)arg1;
- (void)_setDeferredModelUpdateBlock:(CDUnknownBlockType)arg1;
- (void)_scheduledClockLocalNotificationsDidChange:(id)arg1;
- (void)_handleClockNotificationUpdate:(id)arg1;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(_Bool)arg2;
- (void)_activateOrUpdateCardItem:(id)arg1 animated:(_Bool)arg2;
- (id)pendOrDeactivateAlertItems;
- (void)deactivateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)hasAlertItem:(id)arg1;
- (_Bool)activateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)_releasePowerAssertion;
- (void)_createPowerAssertion;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)arg1;
- (void)_turnOnScreen;
- (void)_shouldTurnOnScreenForItem:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (_Bool)_shouldDeterminePocketState;
- (_Bool)_isPocketDetectionEnabled;
- (void)_disablePocketDetection;
- (void)_enablePocketDetection;
- (void)turnOnScreenIfNecessaryForItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldPlaySoundForItem:(id)arg1;
- (_Bool)shouldTreatItemAsInert:(id)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (id)_newItemForBulletin:(id)arg1 shouldPlayLightsAndSirens:(_Bool)arg2;
- (void)_removeCachedBannerForBulletinID:(id)arg1;
- (_Bool)_shouldCacheBannerForBulletin:(id)arg1;
- (void)_addItem:(id)arg1 forBulletin:(id)arg2 playLightsAndSirens:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)killBulletinSounds;
- (id)_listItemContainingCardItem:(id)arg1;
- (id)_listItemContainingSystemAlert:(id)arg1;
- (id)_listItemContainingBulletinID:(id)arg1;
- (id)_coalescableListItemForNewBulletin:(id)arg1;
- (_Bool)hasMissedUnreadNotifications;
- (void)setIsOnscreen:(_Bool)arg1;
- (void)setInScreenOffMode:(_Bool)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_presentFullscreenBulletinAlertIfNeeded;
- (id)_firstItemWantingFullscreenPresentation;
- (void)_addBounceAnimator;
- (void)dealloc;
- (void)prepareForTeardown;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

