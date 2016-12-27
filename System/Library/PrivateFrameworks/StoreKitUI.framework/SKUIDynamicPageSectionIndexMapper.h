/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIEntityProviding;
#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIDynamicPageSectionIndexMapper : NSObject {

	NSRange* _sectionIndexToEntityRange;
	long long _numberOfSections;
	struct {
		unsigned respondsToNumberOfSections : 1;
	}  _entityProviderFlags;
	id<SKUIEntityProviding> _entityProvider;

}

@property (nonatomic,retain) id<SKUIEntityProviding> entityProvider;              //@synthesize entityProvider=_entityProvider - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) long long totalNumberOfEntities; 
-(void)dealloc;
-(void)reloadData;
-(long long)numberOfSections;
-(long long)totalNumberOfEntities;
-(id<SKUIEntityProviding>)entityProvider;
-(void)setEntityProvider:(id<SKUIEntityProviding>)arg1 ;
-(id)entityIndexPathForGlobalIndex:(long long)arg1 ;
-(void)_loadDataIfNeeded;
-(BOOL)getItem:(unsigned long long*)arg1 section:(unsigned long long*)arg2 forGlobalIndex:(long long)arg3 ;
-(long long)globalIndexForEntityIndexPath:(id)arg1 ;
-(NSRange)rangeForSectionAtIndex:(long long)arg1 ;
@end

