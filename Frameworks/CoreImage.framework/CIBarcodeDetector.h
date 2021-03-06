/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSMutableDictionary, CIContext;

@interface CIBarcodeDetector : CIDetector  {
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
}

@property(retain) CIContext * context;


- (id)context;
- (void)setContext:(id)arg1;
- (id)featuresInImage:(id)arg1;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1 options:(id)arg2;

@end
