/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSData;

@interface NEFilterProviderConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _filterBrowsers;
	BOOL _filterSockets;
	BOOL _controlProviderInitialized;
	NSDictionary* _vendorConfiguration;
	NSString* _serverAddress;
	NSString* _username;
	NSString* _organization;
	NSData* _passwordReference;
	NSData* _identityReference;
	NSString* _pluginType;
	NSString* _keychainAccessGroup;

}

@property (retain) NSString * pluginType;                         //@synthesize pluginType=_pluginType - In the implementation block
@property (assign) BOOL controlProviderInitialized;               //@synthesize controlProviderInitialized=_controlProviderInitialized - In the implementation block
@property (retain) NSString * keychainAccessGroup;                //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
@property (assign) BOOL filterBrowsers;                           //@synthesize filterBrowsers=_filterBrowsers - In the implementation block
@property (assign) BOOL filterSockets;                            //@synthesize filterSockets=_filterSockets - In the implementation block
@property (copy) NSDictionary * vendorConfiguration;              //@synthesize vendorConfiguration=_vendorConfiguration - In the implementation block
@property (copy) NSString * serverAddress;                        //@synthesize serverAddress=_serverAddress - In the implementation block
@property (copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (copy) NSString * organization;                         //@synthesize organization=_organization - In the implementation block
@property (copy) NSData * passwordReference;                      //@synthesize passwordReference=_passwordReference - In the implementation block
@property (copy) NSData * identityReference;                      //@synthesize identityReference=_identityReference - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(BOOL)filterBrowsers;
-(void)setFilterBrowsers:(BOOL)arg1 ;
-(BOOL)filterSockets;
-(void)setFilterSockets:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serverAddress;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(NSString *)pluginType;
-(NSString *)keychainAccessGroup;
-(NSData *)passwordReference;
-(void)setServerAddress:(NSString *)arg1 ;
-(void)setPasswordReference:(NSData *)arg1 ;
-(NSData *)identityReference;
-(void)setIdentityReference:(NSData *)arg1 ;
-(NSDictionary *)vendorConfiguration;
-(void)setVendorConfiguration:(NSDictionary *)arg1 ;
-(id)optionsDict;
-(BOOL)controlProviderInitialized;
-(void)setControlProviderInitialized:(BOOL)arg1 ;
@end

