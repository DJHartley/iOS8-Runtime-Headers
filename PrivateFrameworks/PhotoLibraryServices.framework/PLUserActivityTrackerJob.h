/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString;

@interface PLUserActivityTrackerJob : PLDaemonJob  {
    long long _activity;
    NSArray *_uuids;
    NSString *_clientID;
}

@property long long activity;
@property(retain) NSArray * uuids;
@property(retain) NSString * clientID;

+ (void)trackPhotoWasEditedWithFilters:(id)arg1;
+ (void)trackPhotoWasEditedWithStraighten:(id)arg1;
+ (void)trackPhotoWasEditedWithCrop:(id)arg1;
+ (void)trackPhotoWasEditedWithRedEye:(id)arg1;
+ (void)trackPhotoWasEditedWithAutoEnhance:(id)arg1;
+ (void)trackPhotoWasEditedWithRotation:(id)arg1;
+ (void)trackPhotoWasViewed:(id)arg1;
+ (void)trackPhotoWasZoomed:(id)arg1;
+ (void)trackSlalomWasEdited:(id)arg1;
+ (void)trackVideoWasPlayed:(id)arg1;
+ (void)trackVideoWasTrimmed:(id)arg1;
+ (void)trackAssetWasPickedViaAPI:(id)arg1;
+ (void)trackAssetContainerStartedSlideShow:(id)arg1;
+ (void)trackAssetsWereSharedViaSharedPhotoStream:(id)arg1;
+ (void)trackAssetsWereSharedViaAssignToContact:(id)arg1;
+ (void)trackAssetsWereSharedViaCopyToPasteboard:(id)arg1;
+ (void)trackAssetsWereSharedViaPrint:(id)arg1;
+ (void)trackAssetsWereSharedViaMail:(id)arg1;
+ (void)trackAssetsWereSharedViaMessage:(id)arg1;
+ (void)trackAssetsWereSharedViaTudou:(id)arg1;
+ (void)trackAssetsWereSharedViaYouku:(id)arg1;
+ (void)trackAssetsWereSharedViaYouTube:(id)arg1;
+ (void)trackAssetsWereSharedViaWeibo:(id)arg1;
+ (void)trackAssetsWereSharedViaTwitter:(id)arg1;
+ (void)trackAssetsWereSharedViaFacebook:(id)arg1;
+ (void)trackPhotoSetAsWallpaper:(id)arg1;
+ (void)trackAlbumChosenForPictureFrame:(struct NSObject { Class x1; }*)arg1;
+ (id)_uuidsFilteringNulls:(id)arg1;
+ (void)_noteActivity:(long long)arg1 uuids:(id)arg2;
+ (id)_uuidsForAssets:(id)arg1;
+ (void)_noteActivity:(long long)arg1 uuid:(id)arg2;
+ (void)trackAssetUUIDsWereDeleted:(id)arg1;
+ (void)trackAlbumUUIDWasDeleted:(id)arg1;
+ (void)trackAssetWasLoadedViaAPI:(id)arg1;
+ (id)persistentStoreCoordinator;
+ (id)managedObjectModel;
+ (id)managedObjectContext;
+ (id)_queue;

- (id)uuids;
- (void)setClientID:(id)arg1;
- (void)setUuids:(id)arg1;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (id)clientID;
- (void)run;
- (void)dealloc;
- (void)setActivity:(long long)arg1;
- (long long)activity;

@end
