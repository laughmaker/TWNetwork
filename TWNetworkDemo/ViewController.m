//
//  ViewController.m
//  XTNetwork
//
//  Created by 何振东 on 15/9/2.
//  Copyright © 2015年 LZA. All rights reserved.
//

#import "ViewController.h"
#import "TWURLRequest.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


    NSDictionary *params = @{@"name": @"三水", @"age": @"33"};
    
    NSString *urlPath = @"http://www.3water3.com";
    [TWURLRequest get:urlPath params:nil completionHandler:^(id data, NSError *error) {
        
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
