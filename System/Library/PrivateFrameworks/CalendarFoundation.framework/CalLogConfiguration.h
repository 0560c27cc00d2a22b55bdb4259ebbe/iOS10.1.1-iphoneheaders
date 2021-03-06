/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject {

	NSString* _name;
	NSMutableArray* _nodes;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithSimpleDefinition:(id)arg1 ;
-(void)parseConfigurationDefinition:(id)arg1 ;
-(id)parseNodeDefinition:(id)arg1 ;
-(id)parseWriterDefinition:(id)arg1 ;
-(id)parseFilterDefinition:(id)arg1 ;
-(id)initWithDetailedDefinition:(id)arg1 ;
-(NSMutableArray *)nodes;
-(void)setNodes:(NSMutableArray *)arg1 ;
@end

