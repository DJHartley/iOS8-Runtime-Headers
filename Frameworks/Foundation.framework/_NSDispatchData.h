/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSDispatchData : NSData  {
}

+ (bool)supportsSecureCoding;

- (unsigned long long)length;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)hash;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (const void*)bytes;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getBytes:(void*)arg1;
- (bool)_allowsDirectEncoding;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (bool)_isDispatchData;
- (Class)classForCoder;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
