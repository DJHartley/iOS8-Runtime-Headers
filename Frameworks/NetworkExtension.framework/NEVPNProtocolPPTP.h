/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP  {
    long long _encryptionLevel;
}

@property long long encryptionLevel;

+ (bool)supportsSecureCoding;

- (long long)encryptionLevel;
- (void)setEncryptionLevel:(long long)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
