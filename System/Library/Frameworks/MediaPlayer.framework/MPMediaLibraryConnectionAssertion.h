/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject {

	MPMediaLibrary* _library;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2 ;
@end

