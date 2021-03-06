/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURL, NSURLResponseInternal, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSURLResponseInternal *_internal;
}

@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * MIMEType;
@property(readonly) long long expectedContentLength;
@property(copy,readonly) NSString * textEncodingName;
@property(copy,readonly) NSString * suggestedFilename;

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_lastModifiedDate;
- (id)textEncodingName;
- (id)MIMEType;
- (id)init;
- (id)_peerCertificateChain;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (bool)_mustRevalidate;
- (void)_setMIMEType:(id)arg1;
- (void)_setExpectedContentLength:(long long)arg1;
- (id)suggestedFilename;
- (long long)expectedContentLength;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)URL;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)maxExpectedContentLength;
- (id)allHeaderFields;
- (int)statusCode;
- (id)_cacheTime;

@end
