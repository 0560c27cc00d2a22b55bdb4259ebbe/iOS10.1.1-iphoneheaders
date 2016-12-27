/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableDictionary, NSString, NSArray;

@interface OKPresentationCouchStep : OKPresentationCanvas {

	NSMutableDictionary* _internalSettings;
	BOOL _ignoresBusiness;
	NSString* _anchorPage;
	NSString* _script;
	double _duration;
	NSArray* _dependencies;

}

@property (readonly) NSString * anchorPage;                     //@synthesize anchorPage=_anchorPage - In the implementation block
@property (readonly) NSString * script;                         //@synthesize script=_script - In the implementation block
@property (readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL ignoresBusiness;              //@synthesize ignoresBusiness=_ignoresBusiness - In the implementation block
@property (nonatomic,copy) NSArray * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
+(id)couchStepWithAnchorPageName:(id)arg1 script:(id)arg2 duration:(double)arg3 settings:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(double)duration;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)script;
-(NSArray *)dependencies;
-(void)resolveIfNeeded;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andCouch:(id)arg3 ;
-(NSString *)anchorPage;
-(id)parentCouch;
-(void)setDependencies:(NSArray *)arg1 ;
-(BOOL)ignoresBusiness;
-(void)setIgnoresBusiness:(BOOL)arg1 ;
@end

