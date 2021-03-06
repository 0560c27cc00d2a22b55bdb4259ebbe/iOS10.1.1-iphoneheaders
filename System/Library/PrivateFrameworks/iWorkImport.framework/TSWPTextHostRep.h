/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDContainerRep.h>

@protocol TSKSearchReference;
@class TSWPShapeRep, NSObject, NSArray, NSString;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep> {

	TSWPShapeRep* _editingRep;
	BOOL _useFindOverlayers;
	NSObject*<TSKSearchReference> _activeSearchReference;
	NSArray* _searchReferences;

}

@property (nonatomic,retain) NSObject*<TSKSearchReference> activeSearchReference;              //@synthesize activeSearchReference=_activeSearchReference - In the implementation block
@property (nonatomic,readonly) BOOL useFindOverlayers;                                         //@synthesize useFindOverlayers=_useFindOverlayers - In the implementation block
@property (nonatomic,retain) NSArray * searchReferences;                                       //@synthesize searchReferences=_searchReferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)drawTextBackground:(CGContextRef)arg1 insetRect:(CGRect)arg2 pulsating:(BOOL)arg3 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id)childReps;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(BOOL)canSelectChildRep:(id)arg1 ;
-(void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2 ;
-(NSObject*<TSKSearchReference>)activeSearchReference;
-(void)setActiveSearchReference:(NSObject*<TSKSearchReference>)arg1 ;
-(NSArray *)searchReferences;
-(void)setSearchReferences:(NSArray *)arg1 ;
-(void)setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2 ;
-(BOOL)useFindOverlayers;
-(void)dealloc;
-(void)willBeRemoved;
-(NSObject*<TSDContainerInfo>)containerInfo;
@end

