/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation  {
    bool_isFetchAllSubscriptionsOperation;
    NSArray *_subscriptionIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchSubscriptionCompletionBlock;

    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

@property(copy) NSArray * subscriptionIDs;
@property(copy) id fetchSubscriptionCompletionBlock;
@property(retain) NSArray * subscriptions;
@property(retain) NSMutableDictionary * subscriptionsBySubscriptionID;
@property(retain) NSMutableDictionary * subscriptionErrors;
@property bool isFetchAllSubscriptionsOperation;

+ (id)fetchAllSubscriptionsOperation;

- (id)subscriptions;
- (void)setSubscriptionsBySubscriptionID:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptionsBySubscriptionID;
- (id)fetchSubscriptionCompletionBlock;
- (bool)isFetchAllSubscriptionsOperation;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setSubscriptionErrors:(id)arg1;
- (id)subscriptionErrors;
- (void)setFetchSubscriptionCompletionBlock:(id)arg1;
- (id)initWithSubscriptionIDs:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
