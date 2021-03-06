/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class NSSet;

@interface FMFSessionDataManager : NSObject  {
    NSSet *_followers;
    NSSet *_following;
    NSSet *_locations;
}

@property(retain) NSSet * followers;
@property(retain) NSSet * following;
@property(retain) NSSet * locations;

+ (id)sharedInstance;

- (id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2;
- (id)followingForHandle:(id)arg1;
- (id)followerForHandle:(id)arg1;
- (void)setFollowing:(id)arg1;
- (void)setFollowers:(id)arg1;
- (void)_registerABCallbacks;
- (id)following;
- (id)followers;
- (void)abChanged:(id)arg1;
- (void*)_loadAddressBook;
- (id)locationForHandle:(id)arg1;
- (id)locations;
- (void).cxx_destruct;
- (void)setLocations:(id)arg1;

@end
