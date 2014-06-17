/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSError, NSString, NSURL, CPLChangeSession, <CPLLibraryManagerDelegate>, CPLPlatformObject, NSObject<OS_dispatch_queue>, <CPLResourceProgressDelegate>, NSProgress;

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    bool_sizeOfResourcesToUploadIsSet;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    NSString *_libraryVersion;
    unsigned long long _sizeOfResourcesToUpload;
    <CPLLibraryManagerDelegate> *_delegate;
    <CPLResourceProgressDelegate> *_resourceProgressDelegate;
    unsigned long long _status;
    NSError *_statusError;
    unsigned long long _state;
    NSString *_userOverride;
    NSString *_effectiveClientBundleIdentifier;
}

@property(copy,readonly) NSURL * clientLibraryBaseURL;
@property(copy,readonly) NSURL * cloudLibraryStateStorageURL;
@property(copy,readonly) NSURL * cloudLibraryResourceStorageURL;
@property(copy,readonly) NSString * libraryIdentifier;
@property(copy,readonly) NSString * libraryVersion;
@property unsigned long long sizeOfResourcesToUpload;
@property <CPLLibraryManagerDelegate> * delegate;
@property <CPLResourceProgressDelegate> * resourceProgressDelegate;
@property(readonly) unsigned long long status;
@property(readonly) NSError * statusError;
@property bool diagnosticsEnabled;
@property(readonly) NSProgress * cloudSyncProgress;
@property unsigned long long state;
@property(copy) NSString * userOverride;
@property(copy) NSString * effectiveClientBundleIdentifier;
@property(readonly) CPLPlatformObject * platformObject;

+ (void)useCloudPhotoDaemonImplementation;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (id)platformImplementationProtocol;

- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id)arg3;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (id)effectiveClientBundleIdentifier;
- (void)setUserOverride:(id)arg1;
- (id)userOverride;
- (id)statusError;
- (id)resourceProgressDelegate;
- (id)cloudLibraryStateStorageURL;
- (id)clientLibraryBaseURL;
- (id)cloudSyncProgress;
- (id)addSubscriberUsingPublishingHandler:(id)arg1;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1;
- (bool)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (id)initForManagement;
- (void)addInfoToLog:(id)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(id)arg5;
- (void)compactFileCacheWithCompletionHandler:(id)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (bool)diagnosticsEnabled;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)startSyncSession;
- (void)resetStatus;
- (void)publishResource:(id)arg1 completionHandler:(id)arg2;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 completionHandler:(id)arg4;
- (void)discardCurrentSession;
- (void)_setCurrentSession:(id)arg1;
- (void)removeCloudLibraryWithCompletionHandler:(id)arg1;
- (void)_closeDeactivating:(bool)arg1 completionHandler:(id)arg2;
- (void)deactivateWithCompletionHandler:(id)arg1;
- (void)barrier;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)_setLibraryVersion:(id)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (id)libraryIdentifier;
- (id)libraryVersion;
- (unsigned long long)sizeOfResourcesToUpload;
- (id)platformObject;
- (id)cloudLibraryResourceStorageURL;
- (void)beginDownloadForResource:(id)arg1 highPriority:(bool)arg2 completionHandler:(id)arg3;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)setResourceProgressDelegate:(id)arg1;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (id)currentSession;
- (unsigned long long)status;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)closeWithCompletionHandler:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;

@end