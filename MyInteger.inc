<?php

class MyInteger {
  public int $my_integer;
  protected ?bool $plus_one = FALSE;

  public function __construct($my_integer, $plus_one) {
    $this->my_integer = $my_integer;
    $this->plus_one = $plus_one;
  }

  public function get_my_integer() {
    $my_integer = $this->my_integer;

    if ($this->plus_one) {
      $my_integer += 1;
    }

    return $my_integer;
  }
}
