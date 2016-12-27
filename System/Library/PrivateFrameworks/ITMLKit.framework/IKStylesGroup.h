/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSIndexSet;

@interface IKStylesGroup : NSObject {

	NSArray* _mediaQueryList;
	NSArray* _orderedStylesOrGroups;
	NSDictionary* _indexedSelectors;
	NSIndexSet* _groupIndexes;

}

@property (nonatomic,retain,readonly) NSArray * mediaQueryList;                     //@synthesize mediaQueryList=_mediaQueryList - In the implementation block
@property (nonatomic,retain,readonly) NSArray * orderedStylesOrGroups;              //@synthesize orderedStylesOrGroups=_orderedStylesOrGroups - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * indexedSelectors;              //@synthesize indexedSelectors=_indexedSelectors - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * groupIndexes;                    //@synthesize groupIndexes=_groupIndexes - In the implementation block
+(id)stylesGroupWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
-(id)initWithMarkup:(id)arg1 parseSubGroups:(BOOL)arg2 mediaQueryList:(id)arg3 filterBlockedStyles:(BOOL)arg4 ;
-(NSArray *)orderedStylesOrGroups;
-(void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg1 ;
-(id)initWithCSSRule:(id)arg1 mediaQueryList:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
-(NSArray *)mediaQueryList;
-(NSDictionary *)indexedSelectors;
-(NSIndexSet *)groupIndexes;
@end

