/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@interface BWMetadataFormat : BWFormat {

	opaqueCMFormatDescriptionRef _desc;

}
+(void)initialize;
+(id)formatWithMetadataFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)_initWithMetadataFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
@end
