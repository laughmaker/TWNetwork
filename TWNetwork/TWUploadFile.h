//
//  XTFile.h
//  XTFoundationDemo
//
//  Created by lza on 16/7/1.
//  Copyright © 2016年 lza. All rights reserved.
//

#import <Foundation/Foundation.h>

//定义上传文件类型
typedef NS_ENUM(NSUInteger, XTFileType) {
    XTFileTypeMP4   = 0,
    XTFileTypePNG   = 1,
    XTFileTypeJPG   = 2,
    XTFileTypeGIF   = 3,
    XTFileTypeJPEG  = 4,
    XTFileTypeOther = 10
};


@interface TWUploadFile : NSObject

// 标记一个文档对象，必须；在同一组上传的对象里，必须唯一
@property (nonatomic, copy) NSString *name;

// 文件名称，必须设置
@property (nonatomic, copy) NSString *filename;

// 文件类型，枚举类型，必须设置
@property (nonatomic, assign) XTFileType fileType;

// 文件类型，字符串类型，根据枚举类型而来，只读
@property (nonatomic, copy, readonly) NSString *fileTypeString;

// 文件二进制流，必须设置
@property (nonatomic, strong) NSData *fileData;


@end
