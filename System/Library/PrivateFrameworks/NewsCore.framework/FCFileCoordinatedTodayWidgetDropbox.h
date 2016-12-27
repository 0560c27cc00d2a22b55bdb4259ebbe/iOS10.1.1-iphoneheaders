/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayWidgetDropbox : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)peekWithAccessor:(/*^block*/id)arg1 ;
-(void)depositWithAccessor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
@end

