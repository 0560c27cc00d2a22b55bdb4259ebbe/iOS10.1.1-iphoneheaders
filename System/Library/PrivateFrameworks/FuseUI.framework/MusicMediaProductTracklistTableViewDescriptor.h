/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityViewDescriptor.h>

@class MusicEntityValueContext, NSSet, NSString, MusicEntityViewTracklistItemContentDescriptor;

@interface MusicMediaProductTracklistTableViewDescriptor : MusicEntityViewDescriptor {

	MusicEntityValueContext* _entityValueContext;
	NSSet* _propertiesToQueryForContentDescriptorResolution;
	NSString* _groupingProperty;
	NSString* _wantsGroupingProperty;
	MusicEntityViewTracklistItemContentDescriptor* _prominentTracklistItemContentDescriptor;
	long long _prominentTrackStoreID;

}

@property (nonatomic,retain) MusicEntityViewTracklistItemContentDescriptor * defaultContentDescriptor; 
@property (nonatomic,copy) NSString * groupingProperty;                                                                            //@synthesize groupingProperty=_groupingProperty - In the implementation block
@property (nonatomic,copy) NSString * wantsGroupingProperty;                                                                       //@synthesize wantsGroupingProperty=_wantsGroupingProperty - In the implementation block
@property (nonatomic,retain) MusicEntityViewTracklistItemContentDescriptor * prominentTracklistItemContentDescriptor;              //@synthesize prominentTracklistItemContentDescriptor=_prominentTracklistItemContentDescriptor - In the implementation block
@property (assign,nonatomic) long long prominentTrackStoreID;                                                                      //@synthesize prominentTrackStoreID=_prominentTrackStoreID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProminentTrackStoreID:(long long)arg1 ;
-(MusicEntityViewTracklistItemContentDescriptor *)prominentTracklistItemContentDescriptor;
-(void)setProminentTracklistItemContentDescriptor:(MusicEntityViewTracklistItemContentDescriptor *)arg1 ;
-(long long)prominentTrackStoreID;
-(void)setGroupingProperty:(NSString *)arg1 ;
-(void)setWantsGroupingProperty:(NSString *)arg1 ;
-(NSString *)groupingProperty;
-(NSString *)wantsGroupingProperty;
-(void)enumerateContentDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(id)contentDescriptorForIndexPath:(id)arg1 ;
-(BOOL)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
@end

