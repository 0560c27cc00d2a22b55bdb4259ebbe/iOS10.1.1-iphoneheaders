/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABCardContentPluginManager : NSObject {

	NSString* _pluginsDirectory;

}

@property (nonatomic,readonly) NSString * pluginsDirectory;              //@synthesize pluginsDirectory=_pluginsDirectory - In the implementation block
-(void)dealloc;
-(id)bundleNameForLabel:(id)arg1 ;
-(Class)contentProviderForBundleName:(id)arg1 ;
-(NSString *)pluginsDirectory;
-(Class)contentProviderClassForPerson:(void*)arg1 ;
@end

