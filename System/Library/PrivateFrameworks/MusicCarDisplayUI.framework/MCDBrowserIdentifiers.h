/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface MCDBrowserIdentifiers : NSObject {

	NSArray* _cellIdentifiers;
	NSArray* _orderedIdentifiers;
	NSSet* _activeIdentifiers;
	double _maxImageWidth;

}

@property (nonatomic,retain) NSArray * cellIdentifiers;                 //@synthesize cellIdentifiers=_cellIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * orderedIdentifiers;              //@synthesize orderedIdentifiers=_orderedIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * activeIdentifiers;                 //@synthesize activeIdentifiers=_activeIdentifiers - In the implementation block
@property (nonatomic,readonly) double maxImageWidth;                    //@synthesize maxImageWidth=_maxImageWidth - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)localizedStrings;
-(NSArray *)orderedIdentifiers;
-(BOOL)_identifiersDidChange;
-(void)_updateCellIdentifiersOrdering;
-(id)defaultFuseIdentifiers;
-(id)MCDIdentifiersMusicIdentifiersMapping;
-(void)setCellIdentifiers:(NSArray *)arg1 ;
-(NSArray *)cellIdentifiers;
-(void)setOrderedIdentifiers:(NSArray *)arg1 ;
-(NSSet *)activeIdentifiers;
-(void)setActiveIdentifiers:(NSSet *)arg1 ;
-(double)maxImageWidth;
@end

