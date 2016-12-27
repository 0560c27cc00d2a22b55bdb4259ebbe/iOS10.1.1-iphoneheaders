/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDRoot.h>

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot {

	CGSize mPageSize;
	GQDSLPageMargins* mPageMargins;
	GQDSStylesheet* mStylesheet;
	BOOL mHasBody;
	BOOL mIsOldTemplateNameMapInitialized;
	CFDictionaryRef mOldTemplateNameMap;
	BOOL mShowOutliner;
	BOOL mHasHeaders;
	BOOL mHasFooters;

}
+(xmlNs*)appNamespace;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileUrl:(CFURLRef)arg3 ;
-(void)initializeAppBundleResourcesUrl:(CFURLRef)arg1 ;
-(void)setPageMargins:(id)arg1 ;
-(CFStringRef)createFixedPathForOldAppBundleResourcePath:(CFStringRef)arg1 ;
-(id)pageMargins;
-(BOOL)showOutliner;
-(BOOL)hasHeaders;
-(BOOL)hasFooters;
-(CFArrayRef)createUpgradedPathComponentsFromOldTemplatePathComponents:(CFArrayRef)arg1 ;
-(CFStringRef)createUpgradedPathForOldAssetPath:(CFStringRef)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)hasBody;
-(CGSize)pageSize;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
@end

