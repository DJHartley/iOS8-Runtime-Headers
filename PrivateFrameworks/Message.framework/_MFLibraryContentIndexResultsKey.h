/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSIndexSet, MFMessageCriterion;

@interface _MFLibraryContentIndexResultsKey : NSObject  {
    MFMessageCriterion *_criterion;
    NSIndexSet *_mailboxIDs;
}

@property(retain) MFMessageCriterion * criterion;
@property(copy) NSIndexSet * mailboxIDs;


- (id)mailboxIDs;
- (void)setMailboxIDs:(id)arg1;
- (void)setCriterion:(id)arg1;
- (id)criterion;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end
