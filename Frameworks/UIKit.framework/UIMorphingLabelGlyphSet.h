/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMorphingLabel, NSArray, NSMutableArray, NSAttributedString;

@interface UIMorphingLabelGlyphSet : NSObject  {
    UIMorphingLabel *_label;
    NSAttributedString *_attributedString;
    struct __CTLine { } *_line;
    NSMutableArray *_glyphViews;
    unsigned long long _glyphCount;
    unsigned short *_glyphs;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } *_glyphFrames;
    struct CGPoint { double x1; double x2; } *_glyphPositions;
    struct CGPoint { 
        double x; 
        double y; 
    } _lineOrigin;
    double _lineWidth;
}

@property(readonly) unsigned long long glyphCount;
@property(readonly) const unsigned short* glyphs;
@property(readonly) const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }* glyphFrames;
@property(readonly) const struct CGPoint { double x1; double x2; }* glyphPositions;
@property(readonly) NSArray * glyphViews;
@property(readonly) NSAttributedString * attributedString;
@property(readonly) struct CGPoint { double x1; double x2; } lineOrigin;
@property(readonly) double lineWidth;


- (double)lineWidth;
- (id)attributedString;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })lineOrigin;
- (id)glyphViews;
- (const struct CGPoint { double x1; double x2; }*)glyphPositions;
- (const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)glyphFrames;
- (const unsigned short*)glyphs;
- (unsigned long long)glyphCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)placeGlyphs;
- (void)removeGlyphs;
- (id)initWithLabel:(id)arg1 attributedString:(id)arg2;
- (void)buildGlyphViews;

@end
