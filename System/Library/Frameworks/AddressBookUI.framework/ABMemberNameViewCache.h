/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface ABMemberNameViewCache : NSObject {

	NSCache* _styleProvidersCache;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)memberNameRegularFontForStyleProvider:(id)arg1 ;
-(id)regularTextAttributesForStyleProvider:(id)arg1 ;
-(id)boldTextAttributesForStyleProvider:(id)arg1 ;
-(id)placeholderTextAttributesForStyleProvider:(id)arg1 ;
-(id)_cacheForStyleProvider:(id)arg1 ;
-(id)memberNameBoldFontForStyleProvider:(id)arg1 ;
-(id)memberNamePlaceholderFontForStyleProvider:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

