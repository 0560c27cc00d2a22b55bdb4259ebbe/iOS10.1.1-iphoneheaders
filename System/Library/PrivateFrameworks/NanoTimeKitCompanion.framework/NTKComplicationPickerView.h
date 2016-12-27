/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOptionPickerView.h>

@protocol NTKComplicationPickerViewDataSource;
@class NSMutableSet, NSMutableDictionary, NSString, NTKComplication, NTKComplicationDisplayWrapperView;

@interface NTKComplicationPickerView : NTKEditOptionPickerView {

	NSMutableSet* _loadedComplications;
	NSMutableDictionary* _displaysByComplication;
	NSMutableDictionary* _controllersByComplication;
	NSMutableDictionary* _layoutRulesByComplication;
	BOOL _needsReload;
	long long _style;
	id<NTKComplicationPickerViewDataSource> _dataSource;
	NSString* _complicationSlot;

}

@property (assign,nonatomic) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<NTKComplicationPickerViewDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * complicationSlot;                                                    //@synthesize complicationSlot=_complicationSlot - In the implementation block
@property (nonatomic,readonly) NTKComplication * selectedComplication; 
@property (nonatomic,readonly) NTKComplicationDisplayWrapperView * selectedComplicationDisplay; 
-(void)setDataSource:(id<NTKComplicationPickerViewDataSource>)arg1 ;
-(void)dealloc;
-(id<NTKComplicationPickerViewDataSource>)dataSource;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setNeedsReload;
-(void)reloadIfNeeded;
-(id)complicationAtIndex:(unsigned long long)arg1 ;
-(id)initWithAllowedComplications:(id)arg1 selectedComplication:(id)arg2 ;
-(void)setComplicationSlot:(NSString *)arg1 ;
-(NTKComplication *)selectedComplication;
-(void)stealSelectedComplicationDisplay:(id*)arg1 controller:(id*)arg2 ;
-(NSString *)complicationSlot;
-(id)_displayByLoadingComplication:(id)arg1 ;
-(void)_detachComplicationDisplays;
-(void)_loadComplication:(id)arg1 ;
-(void)_reloadLayoutForComplication:(id)arg1 ;
-(NTKComplicationDisplayWrapperView *)selectedComplicationDisplay;
-(Class)_cylinderFaceViewClass;
-(void)_willDisplayFaceView:(id)arg1 ;
-(void)_configureFaceView:(id)arg1 forOption:(id)arg2 ;
@end

