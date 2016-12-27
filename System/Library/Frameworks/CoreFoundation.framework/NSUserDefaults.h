/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSUserDefaults : NSObject {

	id _kvo_;
	CFStringRef _identifier_;
	CFStringRef _container_;
	void** _reserved[2];

}
+(id)_npsManager;
+(void)fu_backupStandardUserDefaultsKey:(id)arg1 ;
+(void)fu_synchronizeStandardUserDefaultsKey:(id)arg1 ;
+(void)setCNFObject:(id)arg1 forKey:(id)arg2 ;
+(id)CNFObjectForKey:(id)arg1 ;
+(void)setShouldShowCNFRegistrationSettingsUI:(BOOL)arg1 ;
+(BOOL)shouldShowCNFRegistrationSettingsUI;
+(unsigned long long)CNFRegEmailValidationTimeout;
+(void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1 ;
+(id)CNFRegSavedAccountName;
+(void)setCNFRegSavedAccountName:(id)arg1 ;
+(void)setCNFRegServerURLOverride:(id)arg1 ;
+(id)CNFRegServerURLOverride;
+(void)setShouldShowCNFRegistrationServerLogs:(BOOL)arg1 ;
+(BOOL)shouldShowCNFRegistrationServerLogs;
+(id)_sf_safariDefaults;
+(id)webui_defaults;
+(void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2 ;
+(id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1 ;
+(id)_IMAppObjectForKey:(id)arg1 ;
+(void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
+(id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2 ;
+(id)_IMAgentObjectForKey:(id)arg1 ;
+(id)akDataForColor:(id)arg1 ;
+(id)akDataForFont:(id)arg1 ;
+(id)akDataForTextAttributes:(id)arg1 ;
+(id)_webkit_preferredLanguageCode;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)_web_defaultsDidChange;
+(id)_web_preferredLanguageCode;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)_copyStandardUserDefaultsIfPresent;
+(id)standardUserDefaults;
-(BOOL)boolValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(id)stringValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(BOOL)boolValueSafeForKey:(id)arg1 ;
-(long long)int64ValueSafeForKey:(id)arg1 ;
-(double)doubleValueSafeForKey:(id)arg1 ;
-(id)stringValueSafeForKey:(id)arg1 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 ;
-(id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)_sf_dateForKey:(id)arg1 ;
-(void)_sf_registerSafariDefaults;
-(BOOL)_sf_javaScriptEnabled;
-(BOOL)_sf_javaScriptCanOpenWindowsAutomatically;
-(BOOL)_sf_warnAboutFraudulentWebsites;
-(void)akSetColor:(id)arg1 forKey:(id)arg2 ;
-(id)akColorForKey:(id)arg1 ;
-(void)akSetFont:(id)arg1 forKey:(id)arg2 ;
-(id)akFontForKey:(id)arg1 ;
-(void)akSetTextAttributes:(id)arg1 forKey:(id)arg2 ;
-(id)akTextAttributesForKey:(id)arg1 ;
-(BOOL)defaultExists:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)stringArrayForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(id)volatileDomainNames;
-(id)volatileDomainForName:(id)arg1 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(void)removePersistentDomainForName:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(BOOL)synchronize;
-(id)initWithSuiteName:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)registerDefaults:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)persistentDomainForName:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(void)addSuiteNamed:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(void)finalize;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_observingCFPreferences;
-(CFStringRef)_identifier;
-(void)_setContainer:(CFURLRef)arg1 ;
-(CFStringRef)_container;
-(void)_setIdentifier:(CFStringRef)arg1 ;
@end

