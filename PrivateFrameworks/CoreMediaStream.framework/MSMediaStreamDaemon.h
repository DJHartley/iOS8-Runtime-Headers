/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <MSMediaStreamDaemonDelegate>, NSCountedSet;

@interface MSMediaStreamDaemon : MSDaemon  {
    <MSMediaStreamDaemonDelegate> *_delegate;
    NSCountedSet *_retainedObjects;
}

@property <MSMediaStreamDaemonDelegate> * delegate;


- (void)abortAllActivityForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;
- (bool)mayDownloadPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2;
- (void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3;
- (void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;
- (void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2;
- (id)notificationStringsForShareStateTransitionOldShares:(id)arg1 newShares:(id)arg2;
- (void)refreshShareStatesForPersonID:(id)arg1;
- (void)removeShare:(id)arg1 forPersonID:(id)arg2;
- (void)modifyShare:(id)arg1 forPersonID:(id)arg2;
- (void)respondToInvitation:(id)arg1 forPersonID:(id)arg2 accept:(bool)arg3;
- (void)sendInvitations:(id)arg1 forPersonID:(id)arg2;
- (id)invitationStringsFromInvitation:(id)arg1 targetPersonID:(id)arg2;
- (id)invitationFromPushNotificationUserInfo:(id)arg1 outSourcePersonID:(id*)arg2 outTargetPersonID:(id*)arg3;
- (void)_setShares:(id)arg1 forPersonID:(id)arg2;
- (id)ownSubscribedStreamForPersonID:(id)arg1;
- (id)subscribedStreamsForPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1 personID:(id)arg2;
- (void)resetSubscriberSyncForPersonID:(id)arg1;
- (bool)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (bool)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id*)arg3;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)arg1;
- (void)didUnidle;
- (void)didIdle;
- (bool)personIDHasOutstandingPublications:(id)arg1;
- (bool)hasOutstandingActivity;
- (void)retryOutstandingActivities;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (id)_boundServerSideConfigManagerForPersonID:(id)arg1;
- (void)_removeShareWithPersonID:(id)arg1 inArray:(id)arg2;
- (id)_findShareWithPersonID:(id)arg1 inArray:(id)arg2;
- (bool)personIDIsAcceptingInvitations:(id)arg1;
- (id)sharesForPersonID:(id)arg1;
- (id)_boundSharingManagerForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)forgetPersonID:(id)arg1;
- (void)stopAllActivities;
- (id)_boundDeleterForPersonID:(id)arg1;
- (id)_boundSubscriberForPersonID:(id)arg1;
- (id)_boundPublisherForPersonID:(id)arg1;
- (bool)isInRetryState;
- (id)nextActivityDate;
- (void)stop;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void).cxx_destruct;

@end
