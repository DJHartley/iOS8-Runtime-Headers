/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBrush : NSObject <NSCopying> {
}

+ (id)brush;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (id)drawnImageForSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 input:(id)arg3;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
