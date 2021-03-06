/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)ISOLanguageCodes;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOCountryCodes;
+ (id)availableLocaleIdentifiers;
+ (id)currentLocale;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)systemLocale;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (bool)supportsSecureCoding;
+ (id)autoupdatingCurrentLocale;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)systemLanguages;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (id)localeForBundleLanguage:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4;
+ (id)deviceLanguageLocale;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)deviceLanguageIdentifier;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (long long)_vk_indexForLocale:(id)arg1;
+ (void)_mapkit_overrideDistanceUnit:(long long)arg1;
+ (void)_mapkit_overrideGuidanceUnit:(long long)arg1;
+ (id)_localeOverridesForLocaleWithIdentifier:(id)arg1;
+ (id)currentDeviceLanguageForFacebook;

- (id)identifier;
- (id)init;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned long long)_cfTypeID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)localeIdentifier;
- (id)_prefs;
- (void)_setNullLocale;
- (unsigned char)_nullLocale;
- (id)objectForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (bool)_mapkit_guidanceUsesMetricSystem;
- (id)_mapkit_objectForKey:(id)arg1;
- (bool)_mapkit_useYardsForShortDistances;
- (bool)_mapkit_distanceUsesMetricSystem;

@end
