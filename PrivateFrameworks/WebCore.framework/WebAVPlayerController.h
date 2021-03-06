/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebAVMediaSelectionOption, NSArray, NSString, AVValueTiming, AVPlayerController;

@interface WebAVPlayerController : NSObject <AVPlayerViewControllerDelegate> {
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    bool_canScanBackward;
    bool_canPlay;
    bool_canPause;
    bool_canTogglePlayback;
    bool_canSeek;
    bool_hasEnabledAudio;
    bool_hasEnabledVideo;
    bool_externalPlaybackActive;
    AVPlayerController *_playerControllerProxy;
    struct WebVideoFullscreenModel { int (**x1)(); } *_delegate;
    double _rate;
    double _contentDuration;
    double _minTime;
    double _maxTime;
    double _contentDurationWithinEndTimes;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVValueTiming *_timing;
    NSArray *_seekableTimeRanges;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    long long _externalPlaybackType;
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;
    struct CGSize { 
        double width; 
        double height; 
    } _contentDimensions;
}

@property(retain) AVPlayerController * playerControllerProxy;
@property struct WebVideoFullscreenModel { int (**x1)(); }* delegate;
@property(readonly) bool canScanForward;
@property bool canScanBackward;
@property(readonly) bool canSeekToBeginning;
@property(readonly) bool canSeekToEnd;
@property bool canPlay;
@property(getter=isPlaying) bool playing;
@property bool canPause;
@property bool canTogglePlayback;
@property double rate;
@property bool canSeek;
@property double contentDuration;
@property struct CGSize { double x1; double x2; } contentDimensions;
@property bool hasEnabledAudio;
@property bool hasEnabledVideo;
@property double minTime;
@property double maxTime;
@property double contentDurationWithinEndTimes;
@property(retain) NSArray * loadedTimeRanges;
@property long long status;
@property(retain) AVValueTiming * timing;
@property(retain) NSArray * seekableTimeRanges;
@property(readonly) bool hasMediaSelectionOptions;
@property(readonly) bool hasAudioMediaSelectionOptions;
@property(retain) NSArray * audioMediaSelectionOptions;
@property(retain) WebAVMediaSelectionOption * currentAudioMediaSelectionOption;
@property(readonly) bool hasLegibleMediaSelectionOptions;
@property(retain) NSArray * legibleMediaSelectionOptions;
@property(retain) WebAVMediaSelectionOption * currentLegibleMediaSelectionOption;
@property(getter=isPlayingOnExternalScreen,readonly) bool playingOnExternalScreen;
@property(getter=isExternalPlaybackActive) bool externalPlaybackActive;
@property long long externalPlaybackType;
@property(retain) NSString * externalPlaybackAirPlayDeviceLocalizedName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPlaying;

- (void)play:(id)arg1;
- (bool)isPlaying;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (void)setExternalPlaybackAirPlayDeviceLocalizedName:(id)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (void)setExternalPlaybackType:(long long)arg1;
- (void)setExternalPlaybackActive:(bool)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setSeekableTimeRanges:(id)arg1;
- (void)setTiming:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (id)loadedTimeRanges;
- (void)setContentDurationWithinEndTimes:(double)arg1;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (void)setHasEnabledVideo:(bool)arg1;
- (bool)hasEnabledVideo;
- (void)setHasEnabledAudio:(bool)arg1;
- (bool)hasEnabledAudio;
- (void)setContentDimensions:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (void)setContentDuration:(double)arg1;
- (void)setCanSeek:(bool)arg1;
- (bool)canSeek;
- (void)setCanTogglePlayback:(bool)arg1;
- (bool)canTogglePlayback;
- (void)setCanPause:(bool)arg1;
- (bool)canPause;
- (void)setCanPlay:(bool)arg1;
- (void)setCanScanBackward:(bool)arg1;
- (bool)canScanBackward;
- (bool)isPlayingOnExternalScreen;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)currentLegibleMediaSelectionOption;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)currentAudioMediaSelectionOption;
- (bool)hasMediaSelectionOptions;
- (void)seekChapterForward:(id)arg1;
- (bool)canSeekToEnd;
- (void)seekChapterBackward:(id)arg1;
- (bool)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (bool)canScanForward;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (bool)hasLiveStreamingContent;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (id)legibleMediaSelectionOptions;
- (id)audioMediaSelectionOptions;
- (bool)hasLegibleMediaSelectionOptions;
- (bool)hasAudioMediaSelectionOptions;
- (void)seekToEnd:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (bool)canPlay;
- (void)seekToTime:(double)arg1;
- (id)timing;
- (double)contentDuration;
- (id)playerControllerProxy;
- (void)setPlayerControllerProxy:(id)arg1;
- (bool)isExternalPlaybackActive;
- (id)seekableTimeRanges;
- (long long)externalPlaybackType;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setDelegate:(struct WebVideoFullscreenModel { int (**x1)(); }*)arg1;
- (struct WebVideoFullscreenModel { int (**x1)(); }*)delegate;
- (void)dealloc;
- (id).cxx_construct;

@end
