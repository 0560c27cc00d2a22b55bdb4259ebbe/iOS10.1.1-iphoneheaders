/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKStyleMapper.h>

@class TSSStylesheet, TSURetainedPointerKeyDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface TSSStyleMapper : NSObject <TSKStyleMapper> {

	TSSStylesheet* _targetStylesheet;
	TSURetainedPointerKeyDictionary* _styleMap;
	NSMutableArray* _mappingContext;
	NSMutableSet* _createdStyles;
	BOOL _forceMatchStyle;
	BOOL _clientsMustRemap;

}

@property (nonatomic,readonly) TSSStylesheet * targetStylesheet; 
@property (nonatomic,readonly) NSSet * createdStyles;                         //@synthesize createdStyles=_createdStyles - In the implementation block
@property (assign,nonatomic) BOOL forceMatchStyle;                            //@synthesize forceMatchStyle=_forceMatchStyle - In the implementation block
@property (assign,nonatomic) BOOL clientsMustRemap;                           //@synthesize clientsMustRemap=_clientsMustRemap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSSStylesheet *)targetStylesheet;
-(id)targetParentByIdentifierExactMatchForStyle:(id)arg1 ;
-(id)targetParentByNameMatchForStyle:(id)arg1 ;
-(id)targetParentByContentTagMatchForStyle:(id)arg1 ;
-(id)targetParentForStyle:(id)arg1 ;
-(id)stylesheetForNewRootStyleFromStyle:(id)arg1 ;
-(BOOL)shouldMapParentOfStyle:(id)arg1 ;
-(id)initWithTargetStylesheet:(id)arg1 ;
-(id)mappedStyleForStyle:(id)arg1 ;
-(void)pushMappingContext:(id)arg1 ;
-(void)popMappingContext:(id)arg1 ;
-(BOOL)clientsMustRemap;
-(id)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(id)arg1 ;
-(id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)createRootStyleForStyle:(id)arg1 withPropertyMap:(id)arg2 ;
-(BOOL)forceMatchStyle;
-(void)setForceMatchStyle:(BOOL)arg1 ;
-(NSSet *)createdStyles;
-(void)setClientsMustRemap:(BOOL)arg1 ;
-(void)dealloc;
@end

