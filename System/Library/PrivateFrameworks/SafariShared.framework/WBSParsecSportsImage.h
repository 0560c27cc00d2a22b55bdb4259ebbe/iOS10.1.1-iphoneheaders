/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSString;

@interface WBSParsecSportsImage : WBSParsecModel {

	long long _alignment;
	WBSParsecImageRepresentation* _imageRepresentation;
	NSString* _label;

}

@property (nonatomic,readonly) long long alignment;                                             //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(long long)alignment;
-(WBSParsecImageRepresentation *)imageRepresentation;
@end

