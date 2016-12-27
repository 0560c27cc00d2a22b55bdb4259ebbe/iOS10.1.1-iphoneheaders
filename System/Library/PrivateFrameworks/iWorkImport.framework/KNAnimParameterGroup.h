/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, KNAnimParameterSavedGroup;

@interface KNAnimParameterGroup : NSObject {

	NSString* _name;
	KNAnimParameterSavedGroup* _savedGroup;
	NSString* _fileName;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) KNAnimParameterSavedGroup * savedGroup;              //@synthesize savedGroup=_savedGroup - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                   //@synthesize fileName=_fileName - In the implementation block
+(void)p_loadAllParametersIfNecessary;
+(id)mediaTimingFunctionForPath:(id)arg1 reversed:(BOOL)arg2 ;
+(id)parameterGroupForName:(id)arg1 ;
+(id)linearPath;
+(id)easeInEaseOutPath;
+(id)easeInPath;
+(id)easeOutPath;
-(id)initWithFileName:(id)arg1 ;
-(KNAnimParameterSavedGroup *)savedGroup;
-(id)pathForAnimationCurve:(id)arg1 ;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(BOOL)arg2 ;
-(void)p_loadParameters;
-(void)setSavedGroup:(KNAnimParameterSavedGroup *)arg1 ;
-(double)doubleForAnimationCurve:(id)arg1 atPercent:(double)arg2 ;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(BOOL)boolForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

