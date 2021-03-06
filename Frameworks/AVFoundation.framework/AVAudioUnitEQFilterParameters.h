/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface AVAudioUnitEQFilterParameters : NSObject  {
    void *_impl;
}

@property long long filterType;
@property float frequency;
@property float bandwidth;
@property float gain;
@property bool bypass;


- (bool)bypass;
- (void)setBypass:(bool)arg1;
- (float)gain;
- (void)setGain:(float)arg1;
- (float)bandwidth;
- (void)setBandwidth:(float)arg1;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl { int (**x1)(); }*)arg1;
- (void)setFrequency:(float)arg1;
- (float)frequency;
- (id)init;
- (void)dealloc;
- (void)setFilterType:(long long)arg1;
- (long long)filterType;

@end
